/*
The BSD 3-clause license
--------------------------------------------------------------------------------
Copyright (c) 2014 Rafael Gago Castano. All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
 are permitted provided that the following conditions are met:

   1. Redistributions of source code must retain the above copyright notice,
      this list of conditions and the following disclaimer.

   2. Redistributions in binary form must reproduce the above copyright notice,
      this list of conditions and the following disclaimer in the documentation
      and/or other materials provided with the distribution.

   3. Neither the name of the copyright holder nor the names of its contributors
      may be used to endorse or promote products derived from this software
      without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY RAFAEL GAGO CASTANO "AS IS" AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
SHALL RAFAEL GAGO CASTANO OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

The views and conclusions contained in the software and documentation are those
of the authors and should not be interpreted as representing official policies,
either expressed or implied, of Rafael Gago Castano.
--------------------------------------------------------------------------------
*/

#ifndef MAL_LOG_FRONTEND_TYPES_HPP_
#define MAL_LOG_FRONTEND_TYPES_HPP_

#include <mal_log/util/integer.hpp>
#include <string>
#include <cassert>
#include <cstring>

namespace mal {

//------------------------------------------------------------------------------
struct sev {
    enum severity {
        debug    = 0,
        trace    = 1,
        notice   = 2,
        warning  = 3,
        error    = 4,
        critical = 5,
        off      = 6,
        invalid  = 7,
    };
};
//------------------------------------------------------------------------------
struct delimited_mem {
    const void* mem;
    uword       size;
};
//------------------------------------------------------------------------------
struct deep_copy_bytes : public delimited_mem {};
//------------------------------------------------------------------------------
struct deep_copy_string : public delimited_mem {};
//------------------------------------------------------------------------------
struct literal_wrapper {
    const char* lit;
};
//------------------------------------------------------------------------------
struct ptr_wrapper {
    const void* ptr;
};
//------------------------------------------------------------------------------
#include <mal_log/frontend_types_convenience_funcs_to_current_namespace.hpp>
//------------------------------------------------------------------------------
} //namespaces

#endif /* MAL_LOG_FRONTEND_TYPES_HPP_ */
