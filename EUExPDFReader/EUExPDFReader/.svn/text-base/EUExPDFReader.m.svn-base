//
//  EUExPDFReader.m
//  AppCan
//
//  Created by AppCan on 13-3-21.
//
//

#import "EUExPDFReader.h"
#import "EUtility.h"

@implementation EUExPDFReader

- (id)initWithBrwView:(EBrowserView *)eInBrwView{
    if (self=[super initWithBrwView:eInBrwView]) {
        
    }
    return self;
}

- (void)openPDFReader:(NSMutableArray *)inArguments
{
    NSString *filePath = nil;
    if (inArguments != nil && [inArguments count]==1) {
        filePath = [self absPath:[inArguments objectAtIndex:0]];
    }else{
        return;
    }
    //Document password (for unlocking most encrypted PDF files)
    NSString *phrase = nil;
	ReaderDocument *document = [ReaderDocument withDocumentFilePath:filePath password:phrase];
	if (document != nil)
	{
        if (!readerController) {
            readerController = [[ReaderViewController alloc] initWithReaderDocument:document];
        }
		readerController.delegate = self;
	}
    [EUtility brwView:meBrwView presentModalViewController:readerController animated:YES];
}

//motai
- (void)dismissReaderViewController:(ReaderViewController *)viewController
{
    [viewController dismissModalViewControllerAnimated:YES];
    
}

#pragma mark - 进入插件界面退出后，点击“关闭”会调

- (void)close:(NSMutableArray *)inArguments
{
    if (readerController) {
        [readerController release];
        readerController = nil;
    }
}

#pragma mark - 进入插件界面退出后，点击“返回”会调

- (void)clean
{
    if (readerController) {
        [readerController release];
        readerController = nil;
    }
}

- (void)dealloc
{
    if (readerController) {
        [readerController release];
        readerController = nil;
    }
    [super dealloc];
}

@end
