

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTDiffHashing-Protocol.h>

@interface NSData (DVTDiffHashing) <DVTDiffHashing>
- (unsigned long long)dvt_diffHashForDataSource:(id)arg1;
@end

