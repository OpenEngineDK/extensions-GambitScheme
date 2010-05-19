#include "GambitScheme.h"

#define ___VERSION 406000
extern "C" {
#include "gambit.h"
#include "init.h"
}
#define GAMBIT_LIBRARY_LINKER ____20_init__

___BEGIN_C_LINKAGE
extern ___mod_or_lnk GAMBIT_LIBRARY_LINKER (___global_state_struct*);
___END_C_LINKAGE

namespace OpenEngine {
namespace Scripting {

using namespace Core;

GambitScheme::GambitScheme() {
    
}

void GambitScheme::Handle(InitializeEventArg arg) {
    ___setup_params_struct setup_params;

    ___setup_params_reset (&setup_params);

    setup_params.version = ___VERSION;
    setup_params.linker  = GAMBIT_LIBRARY_LINKER;

    ___setup(&setup_params);

    oe_init();
}
void GambitScheme::Handle(ProcessEventArg arg) {
}
void GambitScheme::Handle(DeinitializeEventArg arg) {
    ___cleanup();
}

}
}
