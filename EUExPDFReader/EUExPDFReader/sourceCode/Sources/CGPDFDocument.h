//
//	CGPDFDocument.h
//	Reader v2.5.4
//
//	Created by asdkios on 2013-03-20.
//	Copyright © 2013-2014 asdkios. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

//
//	Custom CGPDFDocument[...] functions
//

CGPDFDocumentRef CGPDFDocumentCreateX(CFURLRef theURL, NSString *password);

BOOL CGPDFDocumentNeedsPassword(CFURLRef theURL, NSString *password);
