

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@class DVTFilePath, IDEDistributionItem, NSDictionary, NSString;

@interface IDEDistributionItemProcessingResults : NSObject <NSCopying>
{
    IDEDistributionItem *_item;
    NSDictionary *_entitlements;
    DVTFilePath *_path;
    NSString *_codesignCommandline;
}

+ (id)itemResultsForItem:(id)arg1 entitlements:(id)arg2 destinationPath:(id)arg3 andCommandline:(id)arg4;
@property(readonly, nonatomic) NSString *codesignCommandline; // @synthesize codesignCommandline=_codesignCommandline;
@property(readonly, nonatomic) DVTFilePath *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) IDEDistributionItem *item; // @synthesize item=_item;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

