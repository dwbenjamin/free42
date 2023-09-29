/*****************************************************************************
 * Free42 -- an HP-42S calculator simulator
 * Copyright (C) 2004-2023  Thomas Okken
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2,
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see http://www.gnu.org/licenses/.
 *****************************************************************************/

#import "RootWindow.h"
#import "RootViewController.h"
#import "CalcView.h"
#import "core_main.h"

@implementation RootWindow

- (void) layoutSubviews {
    RootViewController *rvc = (RootViewController *) self.rootViewController;
    [rvc layoutSubViews];
}

- (void) motionEnded:(UIEventSubtype)motion withEvent:(UIEvent *)event {
    if (motion == UIEventSubtypeMotionShake && state.shakeToClearStack)
        core_shake();
    else
        [super motionEnded:motion withEvent:event];
}

@end
