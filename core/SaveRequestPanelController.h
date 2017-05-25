//
//  SaveRequestPanelController.h
//  CocoaRestClient
//
//  Created by Mike Mattozzi on 5/21/17.
//
//

#import <Cocoa/Cocoa.h>

@interface SaveRequestPanelController : NSWindowController {
    NSTextField *saveRequestTextField;
    NSWindow *parent;
}

@property (strong, nonnull) IBOutlet NSTextField *saveRequestTextField;
@property (strong, nonnull) IBOutlet NSWindow *parent;

- (IBAction) save:(nullable id)sender;
- (IBAction) cancel:(nullable id)sender;

@end
