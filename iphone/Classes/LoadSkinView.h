/*****************************************************************************
 * Free42 -- an HP-42S calculator simulator
 * Copyright (C) 2004-2024  Thomas Okken
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

#import <UIKit/UIKit.h>


@interface LoadSkinView : UIView {
    UITextField *urlField;
    UIBarButtonItem *loadButton;
    UIWebView *webView;
    BOOL showMessages;
    NSURLSession *session;
    NSURLSessionDataTask *task[2];
    BOOL taskSuccess[2];
    NSString *skinName;
}

@property (nonatomic, retain) IBOutlet UITextField *urlField;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *loadButton;
@property (nonatomic, retain) IBOutlet UIWebView *webView;

- (void) raised;
- (IBAction) done;
- (IBAction) loadSkin;

@end
