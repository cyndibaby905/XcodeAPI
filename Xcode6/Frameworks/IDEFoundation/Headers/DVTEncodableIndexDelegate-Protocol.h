

#import <Foundation/Foundation.h>

@class DVTEncodableIndex, NSString;

@protocol DVTEncodableIndexDelegate <NSObject>
- (void)encodableIndex:(DVTEncodableIndex *)arg1 didRemoveItemForIdentifier:(NSString *)arg2;
- (void)encodableIndex:(DVTEncodableIndex *)arg1 didAddItemForIdentifier:(NSString *)arg2;
@end

