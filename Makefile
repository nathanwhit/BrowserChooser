include ${THEOS}/makefiles/common.mk
TWEAK_NAME = BrowserChooser
BrowserChooser_FILES = Tweak.xm
BrowserChooser_FRAMEWORKS = Foundation UIKit
BrowserChooser_LIBRARIES = applist
BrowserChooser_ARCHS = arm64

include ${THEOS}/makefiles/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"