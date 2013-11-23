//
//  HistoryViewController.h
//  ProteinTracker
//
//  Created by Wade Wegner on 11/22/13.
//  Copyright (c) 2013 Wade Wegner. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HistoryViewController : UIViewController {
    NSMutableArray *history;
}
@property (weak, nonatomic) IBOutlet UILabel *historyLabel;
-(void)setHistory:(NSMutableArray *)h;
@end
