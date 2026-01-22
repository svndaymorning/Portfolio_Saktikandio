//
//  TASaktiViewController.h
//  TASakti
//
//  Created by Sakti Kandio on 4/18/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//


#import "UIKit/UIKit.h"

#import <GameKit/GameKit.h>
#import <AVFoundation/AVFoundation.h>

@interface TASaktiViewController : UIViewController
<GKVoiceChatClient, GKPeerPickerControllerDelegate, GKSessionDelegate> {
    
    GKSession *currentSession;
    IBOutlet UIButton *connect;
    IBOutlet UIButton *disconnect;
}

@property (nonatomic, retain) GKSession *currentSession;
@property (nonatomic, retain) UIButton *connect;
@property (nonatomic, retain) UIButton *disconnect;

-(IBAction) btnMute:(id) sender;
-(IBAction) btnUnmute:(id) sender;
-(IBAction) btnConnect:(id) sender;
-(IBAction) btnDisconnect:(id) sender;

@end
