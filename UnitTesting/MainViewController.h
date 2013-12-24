//
//  MainViewController.h
//  UnitTesting
//
//  Created by Ankur on 12/24/13.
//  Copyright (c) 2013 Ankur. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
