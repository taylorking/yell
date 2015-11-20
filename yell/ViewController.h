//
//  ViewController.h
//  yell
//
//  Created by Taylor King on 11/20/15.
//  Copyright © 2015 com.neighbor-app. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Socket_IO_Client_Swift/Socket_IO_Client_Swift-Swift.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) SocketIOClient *socket;
@property (weak, nonatomic) IBOutlet UILabel *statusLabel;
@property (weak, nonatomic) IBOutlet UITextField *usernameBox;
- (IBAction)didToggleConnectButton:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *connectButton;

@end

