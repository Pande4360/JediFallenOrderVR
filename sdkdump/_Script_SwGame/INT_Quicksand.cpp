#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "INT_Quicksand.hpp"
#include "SwQuicksandActor.hpp"
_Script_CoreUObject::Class* _Script_SwGame::INT_Quicksand::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.INT_Quicksand");
    return result;
}
void _Script_SwGame::INT_Quicksand::OnStopBeingAffectedByQuicksand(_Script_SwGame::SwQuicksandActor* QuicksandActor) {
    return;
}
void _Script_SwGame::INT_Quicksand::OnStartBeingAffectedByQuicksand(_Script_SwGame::SwQuicksandActor* QuicksandActor) {
    return;
}
