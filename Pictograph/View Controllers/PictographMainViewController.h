//
//  ViewController.h
//  Pictograph
//
//  Created by Adam on 2015-09-30.
//  Copyright © 2015 Adam Boyd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIImageCoder.h"
#import "PictographTopBar.h"
#import <MBProgressHUD/MBProgressHUD.h>

@interface PictographMainViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

typedef NS_ENUM(NSInteger, ImageOption) {
    ImageOptionEncoder,
    ImageOptionDecoder,
    ImageOptionNeither
};

@property (nonatomic, strong) UIImage *selectedImage;
@property (nonatomic, strong) PictographTopBar *topBar;
@property (nonatomic, strong) UIView *mainView;
@property (nonatomic, strong) UIButton *encodeButton;
@property (nonatomic, strong) UIButton *decodeButton;
@property (nonatomic, assign) ImageOption currentOption;
@property (nonatomic, strong) UIAlertController *alertController;
@property (nonatomic, strong) MBProgressHUD *progressHUD;

@end

