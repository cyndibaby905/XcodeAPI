

#import <DVTFoundation/DVTOperation.h>

@interface IDEExecutionActionOperation : DVTOperation
{
    CDUnknownBlockType _environmentPopulationBlock;
}

@property(copy) CDUnknownBlockType environmentPopulationBlock; // @synthesize environmentPopulationBlock=_environmentPopulationBlock;

@end

