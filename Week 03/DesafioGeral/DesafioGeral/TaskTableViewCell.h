//
//  TaskTableViewCell.h
//  DesafioGeral
//
//  Created by Teobaldo Mauro de Moura on 9/2/15.
//  Copyright © 2015 Teobaldo Mauro de Moura. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TaskData.h"

@interface TaskTableViewCell : UITableViewCell

@property (weak, nonatomic) TaskData *task;

@end
