

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTDiffHashing-Protocol.h>

@interface NSDictionary (DVTDiffHashing) <DVTDiffHashing>
- (unsigned long long)dvt_diffHashForDataSource:(id)arg1;
@end
