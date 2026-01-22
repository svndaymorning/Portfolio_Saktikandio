//
//  TASaktiAppDelegate.h
//  TASakti
//
//  Created by Sakti Kandio on 4/18/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TASaktiViewController;

@interface TASaktiAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet TASaktiViewController *viewController;

@end
