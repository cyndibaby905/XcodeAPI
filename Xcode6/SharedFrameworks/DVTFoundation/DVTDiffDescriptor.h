

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTDiffHashing-Protocol.h>

@class DVTDiffContext;

@interface DVTDiffDescriptor : NSObject <NSCoding, NSCopying, DVTDiffHashing>
{
    DVTDiffContext *_diffContext;
    NSRange _originalTokenRange;
    NSRange _modifiedTokenRange;
    NSRange _originalContentRange;
    NSRange _modifiedContentRange;
    unsigned long long _originalTokenHash;
    unsigned long long _modifiedTokenHash;
    DVTDiffDescriptor *_parentDiffDescriptor;
    NSMutableArray *_childDescriptors;
    NSDictionary *_subdescriptorResults;
    int _diffDescriptorType;
    int _diffMergeDirection;
    BOOL _resolved;
    BOOL _binaryConflict;
    BOOL _diffMergeDirectionLocked;
}

+ (void)initialize;
@property BOOL diffMergeDirectionLocked; // @synthesize diffMergeDirectionLocked=_diffMergeDirectionLocked;
@property BOOL binaryConflict; // @synthesize binaryConflict=_binaryConflict;
@property BOOL resolved; // @synthesize resolved=_resolved;
@property(retain) NSDictionary *subdescriptorResults; // @synthesize subdescriptorResults=_subdescriptorResults;
@property(retain) DVTDiffDescriptor *parentDiffDescriptor; // @synthesize parentDiffDescriptor=_parentDiffDescriptor;
@property NSRange modifiedContentRange; // @synthesize modifiedContentRange=_modifiedContentRange;
@property NSRange originalContentRange; // @synthesize originalContentRange=_originalContentRange;
@property unsigned long long modifiedTokenHash; // @synthesize modifiedTokenHash=_modifiedTokenHash;
@property unsigned long long originalTokenHash; // @synthesize originalTokenHash=_originalTokenHash;
@property int diffDescriptorType; // @synthesize diffDescriptorType=_diffDescriptorType;
@property NSRange modifiedTokenRange; // @synthesize modifiedTokenRange=_modifiedTokenRange;
@property NSRange originalTokenRange; // @synthesize originalTokenRange=_originalTokenRange;
@property DVTDiffContext *diffContext; // @synthesize diffContext=_diffContext;
- (BOOL)isEqual:(id)other;
@property(readonly) BOOL isInsertionOrDeletion;
- (void)diffDescriptor:(id)arg1 willRemoveChildDiffDescriptor:(id)arg2;
- (void)diffDescriptor:(id)arg1 didAddChildDiffDescriptor:(id)arg2;
- (void)removeAllChildDiffDescriptors;
- (void)removeChildDiffDescriptorAtIndex:(long long)arg1;
- (void)removeChildDiffDescriptor:(id)arg1;
- (void)insertChildDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (void)addChildDiffDescriptor:(id)arg1;
- (void)removeObjectFromChildDiffDescriptorsAtIndex:(long long)arg1;
- (void)insertObject:(id)arg1 inChildDiffDescriptorsAtIndex:(long long)arg2;
- (void)_diffDescriptor:(id)arg1 willRemoveChildDiffDescriptor:(id)arg2;
- (void)_diffDescriptor:(id)arg1 didAddChildDiffDescriptor:(id)arg2;
@property int diffMergeDirection; // @dynamic diffMergeDirection;
- (id)childDiffDescriptors;
- (unsigned long long)dvt_diffHashForDataSource:(id)arg1;
- (NSString *)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithDiffContext:(id)arg1;

@end

