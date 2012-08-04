//
//  CameraView.h
//  Delis
//
//  Created by 김 영선 on 12. 7. 12..
//  Copyright (c) 2012년 LBS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CameraViewController : UITableViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    IBOutlet UITableView* tableview;
}

@property (nonatomic, strong) UITableView* tableview;
- (IBAction)cancelPost:(id)sender;

@end
