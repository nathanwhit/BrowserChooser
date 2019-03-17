#import <UIKit/UIKit.h>

// Foundation

@interface NSURL (iOS3)
- (BOOL)isWebcalURL;
- (NSURL *)mapsURL;
- (NSURL *)youTubeURL;
@end

@interface NSURL (iOS5)
- (BOOL)isStoreServicesURL;
- (BOOL)gamecenterURL;
- (BOOL)appleStoreURL;
@end

// UIKit

extern UIApplication *UIApp;

@interface UIActionSheet (OS32)
- (id)addMediaButtonWithTitle:(NSString *)title iconView:(UIImageView *)imageView andTableIconView:(UIImageView *)imageView;
@end

@interface UIWindow ()
- (void)_updateToInterfaceOrientation:(UIInterfaceOrientation)orientation animated:(BOOL)animated;
@end

@interface UIWebClip : NSObject
- (NSURL *)pageURL;
@end

// SpringBoard

@interface SpringBoard : UIApplication
- (UIInterfaceOrientation)_frontMostAppOrientation;
- (void)applicationOpenURL:(NSURL *)url publicURLsOnly:(BOOL)publicURLsOnly;
@end

@interface SpringBoard (iOS8)
- (void)applicationOpenURL:(NSURL *)arg1 withApplication:(id)application sender:(id)sender publicURLsOnly:(BOOL)publicOnly animating:(BOOL)animating needsPermission:(BOOL)needsPermission activationSettings:(id)activationSettings withResult:(id)resultHandler;
@end

@interface SpringBoard (iOS12)
- - (void)_applicationOpenURL:(NSURL *)arg1 withApplication:(id)application animating:(BOOL)animating activationSettings:(id)activationSettings origin:(id)origin withResult:(id)resultHandler;

@interface SBApplication (iOS12)
- (NSString *)bundleIdentifier;
@end

@interface SBApplicationController : NSObject
+ (id)sharedInstance;
- (SBApplication *)applicationWithDisplayIdentifier:(NSString *)displayIdentifier;
@end

@interface SBApplicationController (iOS12)
- (SBApplication *)applicationWithBundleIdentifier:(NSString *)bundleIdentifier;
@end

@interface SBBookmarkIcon : NSObject // Not actually
- (UIWebClip *)webClip;
@end
