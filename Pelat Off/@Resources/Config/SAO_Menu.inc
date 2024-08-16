[Variables]
Font=Steelfish Rg 
FontSize=20
FontColor=100,100,100
FontColorHigh=255,255,255

play=[Play ..\@Resources\SAO_Menu\Wav\open.wav]
sound=[Play ..\@Resources\SAO_Menu\Wav\start.wav]
updaterate=20
updatechange=20


;===============|MainBtns|===============

MainBtnAction = #play#[!RainmeterToggleMeterGroup MainMenu][!RainmeterHideMeterGroup SubMenu-1][!RainmeterHideMeterGroup SubMenu-2][!RainmeterHideMeterGroup SubMenu-3]
Img_MainBtn=Main.png
Img_MainBtnActive=Main-Active.png

;===============|MainMenu|===============

MainMenu-1_Action = #play#[!RainmeterToggleMeterGroup SubMenu-1][!RainmeterHideMeterGroup SubMenu-2][!RainmeterHideMeterGroup SubMenu-3]
MainMenu-1_Img = MainMenu-Folders.png
MainMenu-1_ActiveImg = MainMenu-Folders-Active.png

MainMenu-2_Action = #play#[!RainmeterToggleMeterGroup SubMenu-2][!RainmeterHideMeterGroup SubMenu-1][!RainmeterHideMeterGroup SubMenu-3]
MainMenu-2_Img = MainMenu-Application.png
MainMenu-2_ActiveImg = MainMenu-Application-Active.png

MainMenu-3_Action = #play#[!RainmeterToggleMeterGroup SubMenu-3][!RainmeterHideMeterGroup SubMenu-1][!RainmeterHideMeterGroup SubMenu-2]
MainMenu-3_Img = MainMenu-Game.png
MainMenu-3_ActiveImg = MainMenu-Game-Active.png

;===============|SubMenu|===============

SubMenu_BackGround-1 = SubMenu_BackGround-1.png
SubMenu_BackGroundActive-1 = SubMenu_BackGroundActive-1.png

SubMenu_BackGround-2 = SubMenu_BackGround-2.png
SubMenu_BackGroundActive-2 = SubMenu_BackGroundActive-2.png

;===============|SubMenu-1|

SubMenu-1.1_Title = Coding
SubMenu-1.1_Icon = [SubMenu-1]Code.png
SubMenu-1.1_Action = #sound#["C:\Users\amahd\Desktop\Code"]

SubMenu-1.2_Title = Music
SubMenu-1.2_Icon = [SubMenu-1]Music.png
SubMenu-1.2_Action = #sound#["D:\Music"]

SubMenu-1.3_Title = Anime
SubMenu-1.3_Icon = [SubMenu-1]Anime.png
SubMenu-1.3_Action = #sound#["D:\!Animations\[ Anime ]"]

;===============|SubMenu-2|

SubMenu-2.1_Title = NekoRay
SubMenu-2.1_Icon = [SubMenu-2]NekoRay.png
SubMenu-2.1_Action = ["C:\Users\amahd\Downloads\nekoray\nekoray.exe"]

SubMenu-2.2_Title = Ubsoft Connect
SubMenu-2.2_Icon = [SubMenu-2]Ubisoft.png
SubMenu-2.2_Action = ["C:\Program Files (x86)\Ubisoft\Ubisoft Game Launcher\UbisoftConnect.exe"]

SubMenu-2.3_Title = TeamSpeak
SubMenu-2.3_Icon = [SubMenu-2]TeamSpeak.png
SubMenu-2.3_Action = ["C:\Program Files\TeamSpeak 3 Client\ts3client_win64.exe"]

;===============|SubMenu-3|

SubMenu-3.1_Title = Zula
SubMenu-3.1_Icon = [SubMenu-3]Zulla.png
SubMenu-3.1_Action = ["D:\Games\Zula\zula_launcher.exe"]

SubMenu-3.2_Title = BrawlHalla
SubMenu-3.2_Icon = [SubMenu-3]BrawlHalla.png
SubMenu-3.2_Action = ["steam://rungameid/291550"]

SubMenu-3.3_Title = RainBow Six
SubMenu-3.3_Icon = [SubMenu-3]R6.png
SubMenu-3.3_Action = ["steam://rungameid/359550"]

SubMenu-3.4_Title = WatchDogs 2
SubMenu-3.4_Icon = [SubMenu-3]WatchDogs.png
SubMenu-3.4_Action = ["steam://rungameid/447040"]
