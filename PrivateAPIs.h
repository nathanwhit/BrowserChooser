#import <UIKit/UIKit.h>
// #import <SpringBoard/SpringBoard.h>
#import <UIKit/UIApplication.h>

// Foundation

@interface NSURL (iOS12)
- (BOOL)isStoreServicesURL;
- (BOOL)isAppStoreURL;
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
- (void)applicationOpenURL:(NSURL *)arg1 withApplication:(id)application animating:(BOOL)animating activationSettings:(id)activationSettings origin:(id)origin withResult:(id)resultHandler;
@end

@interface SBApplication : NSObject
- (NSString *)displayIdentifier;
@end

@interface SBApplication (iOS12)
- (NSString *)bundleIdentifier;
@end

@interface SBApplicationController : NSObject
+ (id)sharedInstance;
- (SBApplication *)applicationWithDisplayIdentifier:(NSString *)displayIdentifier;
- (SBApplication *)applicationWithBundleIdentifier:(NSString *)bundleIdentifier;
@end


@interface SBBookmarkIcon : NSObject // Not actually
- (UIWebClip *)webClip;
@end
