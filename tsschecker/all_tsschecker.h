//
//  all.h
//  tsschecker
//
//  Created by tihmstar on 26.01.16.
//  Copyright © 2016 tihmstar. All rights reserved.
//

#ifndef all_h
#define all_h

extern int idevicerestore_debug;

#define info(a ...) printf(a)
#define log(a ...) if (dbglog) printf(a)
#define warning(a ...) if (dbglog) printf("[WARNING] "), printf(a)
#define debug(a ...) if (idevicerestore_debug) printf(a)
#define error(a ...) printf("[Error] "),printf(a)

#define VERSION_COMMIT_COUNT "183"
#define VERSION_COMMIT_SHA "29635e38dab3f18061677b20d2196f391eb1e243"

#endif /* all_h */
