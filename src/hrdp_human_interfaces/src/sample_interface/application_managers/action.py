from constant_variables import*
from ..organs.mouth import universal_talk
from ..application.timer import universal_timertime
from ..application.clock import clock
from ..application.joke import joke
from time import sleep

class Action():
    def __init__(self, language, master):
        """First-order clasfficiation of actions : by Language"""
        self.language = language
        self.master = master
 
    def action_en(self, mode_number):
        if mode_number == UNKNOWN_ERROR:
            universal_talk('Sorry, I could not understand what you said. I will try harder next time.', self.language)
        elif mode_number == GREETING:
            universal_talk('Hello, how can I help you?', self.language)
        else:
            eng_action = EngAction(self.language, self.master)
            if mode_number == CLOCK:
                return eng_action.clock_ENG()
            elif mode_number == TIMER:
                return eng_action.timer_ENG()
            elif mode_number == JOKE:
                return eng_action.joke_ENG()
            
            elif mode_number == HOUSE_PARTY_PROTOCOL:
                return eng_action.house_party_protocol_ENG()
            else:
                universal_talk('Sorry, requested service is not readied yet.',self.language)
        
    def action_kr(self, mode_number):
        if mode_number == UNKNOWN_ERROR:
            universal_talk('죄송해요, 무슨 말씀인지 잘 알아듣지 못했어요. 더욱 노력해서 다음 번엔 꼭 도와드리겠습니다.', self.language)
        elif mode_number == GREETING:
            universal_talk('안녕하세요, 무엇을 도와드릴까요?', self.language)
        else:
            kor_action = KorAction(self.language, self.master)
            if mode_number == CLOCK:
                return kor_action.clock_KOR()
            elif mode_number == TIMER:
                return kor_action.timer_KOR()
            elif mode_number == JOKE:
                return kor_action.joke_KOR()
            
            elif mode_number == HOUSE_PARTY_PROTOCOL:
                return kor_action.house_party_protocol_KOR()
            else:
                return universal_talk('죄송해요, 요청하신 서비스는 아직 서비스 준비중입니다.', self.language)

    def action_es(self, mode_number):
        if mode_number == UNKNOWN_ERROR:
            universal_talk('Lo siento, no entendí bien lo que estabas diciendo. Haremos todo lo posible para ayudarle en la próxima vez.', self.language)
        elif mode_number == GREETING:
            universal_talk('¿Hola, en que puedo ayudarle?', self.language)

    def universal_action(self, mode_number):
        """Language Key Dictionary
            0 : English
            1 : Korean
            2 : Spanish
        """
        if self.language == 0:
            return self.action_en(mode_number)
        elif self.language == 1:
            return self.action_kr(mode_number)
        elif self.language == 2:
            return self.action_es(mode_number)



class EngAction(Action):
    def __init__(self, language, master):
        """Second-order classification of actions: by Tasks"""
        super().__init__(language, master)

    def clock_ENG(self):
        time_list = clock()
        month_dict = {
            1 : 'January',
            2 : 'Feburary',
            3 : 'March',
            4 : 'April',
            5 : 'May',
            6 : 'June',
            7 : 'July',
            8 : 'August',
            9 : 'September',
            10 : 'October',
            11 : 'November',
            12 : 'December'
        }
        day_dict = {
            1 : 'first',
            2 : 'second',
            3 : 'third',
            4 : 'fourth',
            5 : 'fifth',
            6 : 'sixth',
            7 : 'seventh'
        }
        if time_list[2] > 7:
            universal_talk('Today is {0} {1} {2} {3}'.format(time_list[0], month_dict[time_list[1]], time_list[2], time_list[3]), self.language)
        else:
            universal_talk('Today is {0} {1} {2} {3}'.format(time_list[0], month_dict[time_list[1]], day_dict[time_list[2]], time_list[3]), self.language)


    def _notification_ENG(self):
        for _ in range(3):
            universal_talk('Timer is over!', self.language)

    def timer_ENG(self):
        timer_seconds = universal_timertime(self.master, self.language)
        try:
            if (timer_seconds >=0):
                universal_talk('your timer has just set. I will let you know for three times when it is done!', self.language)
                sleep(int(timer_seconds))
                self._notification_ENG()
                # threading.Timer(timer_seconds, self._notification()).start()
            else:
                universal_talk('Sorry, I could not understand your timer order. Please try it again.', self.language)
        except:
            universal_talk('Sorry, I could not understand your timer order. Please try it again.', self.language)
    
    def joke_ENG(self):
        joke_num = joke()
        joke_list = [
            ['What do you call a factory that makes okay products?', 'A satisfactory.'],
            ['What did baby corn say to mama corn?', 'where is pop corn?'],
            ['what does a sprinter eat before a race?', 'they fast!'],
            ['What do you call someone with no body and no nose?', 'Well... nobody knows.'],
            ['How many tickles does it take to make an octopus laugh?', 'Ten tickles!'],
            ['What do you call the cheese that is not yours?', 'Nacho cheese.']
        ]
        for i in range(len(joke_list[joke_num-1])):
            universal_talk(joke_list[joke_num-1][i], self.language)
        sleep(1)
        universal_talk('ha ha ha', self.language)


    def house_party_protocol_ENG(self):
        universal_talk('Activate house party protocol! Let me show you some of my representative functions at the same time.', self.language)
        self.master += ' 3 seconds'
        self.clock_ENG()
        self.timer_ENG()
        self.joke_ENG()
        universal_talk('house party protocol deactivated.', self.language)
        


class KorAction(Action):
    def __init__(self, language, master):
        """Second-order classification of actions: by Tasks"""
        super().__init__(language, master)
    
    def clock_KOR(self):
        time_list = clock()
        universal_talk('지금은 {0}월 {1}일 {2}시 {3}분 입니다.'.format(time_list[0], time_list[1], time_list[2], time_list[3]), self.language)
    
    def _notification_KOR(self):
        for i in range(3):
            universal_talk('타이머가 끝났습니다!', self.language)

    def timer_KOR(self):
        timer_seconds = universal_timertime(self.master, self.language)
        try:
            if (timer_seconds >0):
                universal_talk('타이머가 설정되었습니다. 끝나면 세 번 알려드려요!'.format(timer_seconds), self.language)
                sleep(int(timer_seconds))
                self._notification_KOR()
                # threading.Timer(timer_seconds, self._notification()).start()
            else:
                universal_talk('잘못된 타이머 시간을 말씀하셨습니다. 타이머를 종료합니다.', self.language)
        except:
            universal_talk('죄송해요, 타이머 설정 시간을 잘 이해하지 못했습니다. 타이머를 종료합니다.', self.language)
    
    def joke_KOR(self):
        joke_num = joke()
        joke_list = [['경찰관에는 어떤 혈액형이 가장 많을까요?','정답은 비형~ 비형~'],
            ['차 열쇠의 색깔은?', '정답은 카 키 색'],
            ['신하가 왕에게 공을 던지며 하는 말은?','정답은 송구하옵니다.. 전하..'],
            ['자동차를 톡하고 치면 뭘까요?','정답은 카 톡 '],
            ['침대를 밀고 돌리면 뭘까요?', '정답은 배드 민 턴'],
            ['결정장애가 많은 대학은 어디일까요?', '정답은 고려 대학교']
           ]
        for i in range(len(joke_list[joke_num-1])):
            universal_talk(joke_list[joke_num-1][i], self.language)
        sleep(1)
        universal_talk('하 하 하', self.language)


    def house_party_protocol_KOR(self):
        universal_talk('제가 할 수 있는 것들 중 몇 가지만 소개드릴게요. 예를 들어,', self.language)
        self.clock_KOR()
        self.joke_KOR()
        universal_talk('이상입니다!', self.language)


class EspAction(Action):
    pass