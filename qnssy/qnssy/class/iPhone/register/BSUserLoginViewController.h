//
//  BSUserLoginViewController.h
//  qnssy
//
//  Created by juchen on 13-3-15.
//  Copyright (c) 2013年 jpm. All rights reserved.
//

#import <UIKit/UIKit.h>
@class TPKeyboardAvoidingScrollView;

@interface BSUserLoginViewController : UIViewController <UITextFieldDelegate>
@property (retain, nonatomic) IBOutlet TPKeyboardAvoidingScrollView *scrollView;

//@property (retain, nonatomic) IBOutlet UIImageView *userLogoImage_1;
//@property (retain, nonatomic) IBOutlet UIImageView *userLogoImage_2;
//@property (retain, nonatomic) IBOutlet UIImageView *userLogoImage_3;
//@property (retain, nonatomic) IBOutlet UIImageView *userLogoImage_4;
//@property (retain, nonatomic) IBOutlet UIImageView *userLogoImage_5;
//@property (retain, nonatomic) IBOutlet UIImageView *userLogoImage_6;
//@property (retain, nonatomic) IBOutlet UIImageView *userLogoImage_7;
//@property (retain, nonatomic) IBOutlet UIImageView *userLogoImage_8;
//@property (retain, nonatomic) IBOutlet UIImageView *userLogoImage_9;
//@property (retain, nonatomic) IBOutlet UIImageView *userLogoImage_10;
@property (retain, nonatomic) IBOutlet UITextField *userAccount;
@property (retain, nonatomic) IBOutlet UITextField *userPassword;
<<<<<<< HEAD
//@property (retain, nonatomic) IBOutlet UIButton *registerButton;
=======
@property (retain, nonatomic) IBOutlet UIButton *loginButton;
@property (retain, nonatomic) IBOutlet UIButton *loginQQButton;
>>>>>>> e7a9ad5153495ebe4ebf420f0f1da0acaef602ad

@property (retain, nonatomic) IBOutlet UIView *loginBackgroundView;

- (IBAction)toRegister:(id)sender;
- (IBAction)clickLoginButton:(id)sender;
- (IBAction)clickQQLoginButton:(id)sender;

@end
