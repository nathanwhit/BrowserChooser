include ${THEOS}/makefiles/common.mk
TWEAK_NAME = BrowserChooser
BrowserChooser_FILES = Tweak.xm
BrowserChooser_FRAMEWORKS = Foundation UIKit
# BrowserChooser_PRIVATE_FRAMEWORKS += SpringBoard
BrowserChooser_LIBRARIES = applist
XXX_CODESIGN_FLAGS = -Sentitlements.xml


include ${THEOS}/makefiles/tweak.mk
after-install::
	install.exec "killall -9 SpringBoard"
	
	