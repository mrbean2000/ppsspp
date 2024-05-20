// ViewController.h boilerplate

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>
#if __IPHONE_OS_VERSION_MAX_ALLOWED > __IPHONE_6_1
#import <GameController/GameController.h>
#endif
#import "iCade/iCadeReaderView.h"
#import "CameraHelper.h"
#import "LocationHelper.h"

@interface ViewController : GLKViewController <iCadeEventDelegate,
            LocationHandlerDelegate, CameraFrameDelegate, UIGestureRecognizerDelegate, UIKeyInput>

- (void)shareText:(NSString *)text;
- (void)shutdown;
- (void)hideKeyboard;
- (void)showKeyboard;

@end

extern __unsafe_unretained ViewController* sharedViewController;
void setCameraSize(int width, int height);
void startVideo();
void stopVideo();
void startLocation();
void stopLocation();
