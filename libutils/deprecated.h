/*
  Copyright 2023 Northern.tech AS

  This file is part of CFEngine 3 - written and maintained by Northern.tech AS.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  To the extent this program is licensed as part of the Enterprise
  versions of CFEngine, the applicable Commercial Open Source License
  (COSL) may apply to this file if you as a licensee so wish it. See
  included file COSL.txt.
*/

#ifndef CFENGINE_DEPRECATED_H
#define CFENGINE_DEPRECATED_H


#include <platform.h>
#include <compiler.h>


/* Mark specific functions as deprecated so that we don't use them. Since the
 * signature of the functions has to be exactly the same as in libc, we only
 * do that for Linux, where main development happens. */


#if defined(__linux__) && defined(__GLIBC__) && (!defined(_FORTIFY_SOURCE) || (_FORTIFY_SOURCE < 1))


int sprintf(char *str, const char *format, ...) \
    FUNC_DEPRECATED("Try snprintf() or xsnprintf() or xasprintf()");

#endif  /* __linux__ && __GLIBC__ */


#endif  /* CFENGINE_DEPRECATED_H */
