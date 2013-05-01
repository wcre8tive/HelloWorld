//
//  MainViewController.h
//  HelloWorld
//
//  Created by Harakawa  on 01/05/2013.
//  Copyright (c) 2013 Harakawa . All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
