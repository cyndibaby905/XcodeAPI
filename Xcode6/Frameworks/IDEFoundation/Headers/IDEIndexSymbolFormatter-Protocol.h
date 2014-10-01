

#import <Foundation/Foundation.h>

@class IDEIndexSymbol, NSString;

@protocol IDEIndexSymbolFormatter <NSObject>
- (NSString *)qualifiedDisplayNameForSymbol:(IDEIndexSymbol *)arg1;
- (NSString *)displayNameForSymbol:(IDEIndexSymbol *)arg1;
@end

