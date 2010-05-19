// 
// -------------------------------------------------------------------
// Copyright (C) 2007 OpenEngine.dk (See AUTHORS)
//
// This program is free software; It is covered by the GNU General
// Public License version 2 or any later version.
// See the GNU General Public License for more details (see LICENSE).
//--------------------------------------------------------------------


#ifndef _OE_GAMBIT_SCHEME_H_
#define _OE_GAMBIT_SCHEME_H_

#include <Core/IModule.h>

namespace OpenEngine {
namespace Scripting {

/**
 * Short description.
 *
 * @class GambitScheme GambitScheme.h ons/GambitScheme/Script/GambitScheme.h
 */
class GambitScheme : public Core::IModule {
private:
    
public:
    GambitScheme();
    void Handle(Core::InitializeEventArg arg);
    void Handle(Core::ProcessEventArg arg);
    void Handle(Core::DeinitializeEventArg arg);
};

} // NS Scripting
} // NS OpenEngine

#endif // _OE_GAMBIT_SCHEME_H_
