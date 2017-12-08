//
//  IRTextFieldDrag.h
//  iReSign
//
//  Created by Esteban Bouza on 01/12/12.
//

#import <Cocoa/Cocoa.h>

@class IRTextFieldDrag;

@protocol IRTextFieldDragDelegate <NSObject>
- (void)textFieldValueDidChange:(IRTextFieldDrag*)sender;
@end

@interface IRTextFieldDrag : NSTextField
@property (nonatomic,assign)id<IRTextFieldDragDelegate> valueDelegate;
@end

