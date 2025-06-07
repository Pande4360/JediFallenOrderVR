#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackInst.hpp"
#include "InterpTrackInstAudioMaster.hpp"
_Script_CoreUObject::Class* _Script_Engine::InterpTrackInstAudioMaster::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackInstAudioMaster");
    return result;
}
