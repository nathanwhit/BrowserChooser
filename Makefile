include ${THEOS}/makefiles/common.mk
TWEAK_NAME = BrowserChooser
BrowserChooser_FILES = Tweak.x
BrowserChooser_FRAMEWORKS = Foundation UIKit
BrowserChooser_LIBRARIES = applist

include ${THEOS}/makefiles/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"