//
//  ViewController.h
//  ProteinTracker
//
//  Created by Wade Wegner on 11/22/13.
//  Copyright (c) 2013 Wade Wegner. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HistoryViewController.h"

@interface MainViewController : UIViewController {
    int total;
    NSMutableArray *amountHistory;
}
- (IBAction)historyButton:(id)sender;
- (IBAction)addButton:(id)sender;

- (IBAction)unwindToMain:(UIStoryboardSegue *)seque;

@property (weak, nonatomic) IBOutlet UITextField *amountText;
@property (weak, nonatomic) IBOutlet UILabel *goalLabel;
@property (weak, nonatomic) IBOutlet UILabel *totalLabel;

- (void)goalChanged:(NSNotification *)notification;

@end
