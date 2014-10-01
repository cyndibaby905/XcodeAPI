

#import <Foundation/Foundation.h>

@interface NSString (DVTMacroDefinitionAdditions)
- (id)dvt_parseAsMacroAssignmentsUsingMacroNameRegistry:(id)arg1 returningErrorString:(id *)arg2;
- (id)dvt_parseAsMacroAssignmentUsingMacroNameRegistry:(id)arg1 returningErrorString:(id *)arg2;
- (id)dvt_parseAsMacroAssignmentsWithBlock:(CDUnknownBlockType)arg1 returningErrorString:(id *)arg2;
- (id)_dvt_parseAsMacroAssignmentsIntoMacroDefinitionTable:(id)arg1 withBlock:(CDUnknownBlockType)arg2 returningErrorString:(id *)arg3;
- (id)dvt_parseAsMacroAssignmentParsingValueWithBlock:(CDUnknownBlockType)arg1 returningErrorString:(id *)arg2;
@end

