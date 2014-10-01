

#import <Foundation/Foundation.h>

@class IDEContainer, NSArray;

@interface IDEBuildIssueChange : NSObject
{
    int _type;
    NSArray *_issues;
    id _providerContext;
    IDEContainer *_container;
    id <IDEBlueprint> _blueprint;
}

+ (id)setChangeWithIssues:(id)arg1 forProviderContext:(id)arg2 container:(id)arg3 blueprint:(id)arg4;
+ (id)removeChangeWithIssues:(id)arg1 forProviderContext:(id)arg2 container:(id)arg3 blueprint:(id)arg4;
+ (id)additionChangeWithIssues:(id)arg1 forProviderContext:(id)arg2 container:(id)arg3 blueprint:(id)arg4;
@property(retain, nonatomic) id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
@property(retain, nonatomic) IDEContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) id providerContext; // @synthesize providerContext=_providerContext;
@property(retain, nonatomic) NSArray *issues; // @synthesize issues=_issues;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)initWithType:(int)arg1 issues:(id)arg2 forProviderContext:(id)arg3 container:(id)arg4 blueprint:(id)arg5;

@end

