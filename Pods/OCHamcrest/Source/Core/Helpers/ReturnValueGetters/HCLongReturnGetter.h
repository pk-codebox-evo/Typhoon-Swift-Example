//  OCHamcrest by Jon Reid, http://qualitycoding.org/about/
//  Copyright 2015 hamcrest.org. See LICENSE.txt

#import "HCReturnValueGetter.h"


@interface HCLongReturnGetter : HCReturnValueGetter

- (instancetype)initWithSuccessor:(HCReturnValueGetter *)successor;

@end
