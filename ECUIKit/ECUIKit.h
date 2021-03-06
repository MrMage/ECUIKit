//
//  ECUIKit.h
//  ECUIKit
//
//  Created by Daniel Alm on 04.07.13.
//  Copyright (c) 2013 EUROCOMP. All rights reserved.
//

#import <Foundation/Foundation.h>

#if TARGET_OS_IPHONE

// iOS
#define ECFont UIFont
#define ECImage UIImage
#define ECColor UIColor
#define ECView UIView
#define ECScrollView UIScrollView
#define ECBezierPath UIBezierPath

#ifndef ECRGBCOLOR
#define ECRGBCOLOR(r,g,b) [ECColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define ECRGBACOLOR(r,g,b,a) [ECColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]
#endif

#else

// Mac
#define ECFont NSFont
#define ECImage NSImage
#define ECColor NSColor
#define ECBezierPath NSBezierPath
#define ECView NSView
#define ECImageView NSImageView
#define ECButton NSButton


#define UIFont ECFont
#define UIFontWeightThin NSFontWeightThin
#define UIFontWeightLight NSFontWeightLight
#define UIFontWeightRegular NSFontWeightRegular
#define UIFontWeightMedium NSFontWeightMedium
#define UIFontWeightBold NSFontWeightBold

#define UIImage ECImage
#define UIColor ECColor
#define UIBezierPath ECBezierPath
#define UIView ECView
#define UIScrollView ECScrollView
#define UIImageView ECImageView
#define UIButton ECButton

#define UIDocument NSDocument
#define UIDocumentChangeDone NSChangeDone

#define UIPrintPageRenderer ECPrintPageRenderer
#define UIPrintFormatter ECPrintFormatter

#define UIEdgeInsets NSEdgeInsets
#define UIEdgeInsetsMake(a, b, c, d) NSEdgeInsetsMake(a, b, c, d)

#define EAGLContext NSOpenGLContext
#define glGenVertexArraysOES glGenVertexArrays
#define glBindVertexArrayOES glBindVertexArray
#define glDeleteVertexArraysOES glDeleteVertexArrays


#define didMoveToSuperview viewDidMoveToSuperview
#define didMoveToWindow viewDidMoveToWindow


#define colorWithRed colorWithCalibratedRed
#define ECRGBCOLOR(r,g,b) [ECColor colorWithCalibratedRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define ECRGBACOLOR(r,g,b,a) [ECColor colorWithCalibratedRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]

#endif

#import "ECLog.h"

#import "ECCoreGraphics.h"

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#else
#import "NSFont+ECUIKit.h"
#import "NSBezierPath+ECUIKit.h"
#import "NSValue+ECUIKit.h"
#import "NSOpenGLContext+ECUIKit.h"

#import "NSView+ECUIKit.h"
#import "NSScrollView+ECUIKit.h"
#import "NSTableView+ECUIKit.h"

#import "ECPrintPageRenderer.h"
#import "ECPrintFormatter.h"
#endif

#import "NSString+ECUIKit.h"

#import "ECColor.h"
