//
//  RPSGame.h
//  RockPaperScissors
//
//  Created by Akshay Iyer on 6/18/16.
//  Copyright © 2016 akshaytiyer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RPSTurn.h"

@interface RPSGame: NSObject

@property (nonatomic) RPSTurn *firstTurn;
@property (nonatomic) RPSTurn *secondTurn;

-(instancetype) initFirstMove: (RPSTurn*) first
                  secondMove: (RPSTurn*) second;
-(RPSTurn*) winner;
-(RPSTurn*) loser;

@end
