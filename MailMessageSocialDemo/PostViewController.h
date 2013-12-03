//
//  PostViewController.h
//  MailMessageSocialDemo
//
//  Created by Apple on 19/07/13.
//  Copyright (c) 2013 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import <Social/Social.h>

@interface PostViewController : UIViewController <MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate>

- (IBAction)composeMail:(id)sender;
- (IBAction)composeMessage:(id)sender;
- (IBAction)tweet:(id)sender;
- (IBAction)postOnFacebook:(id)sender;
- (IBAction)whatsApp:(id)sender;


@end
