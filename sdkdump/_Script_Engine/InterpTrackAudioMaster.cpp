#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackAudioMaster.hpp"
#include "InterpTrackVectorBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::InterpTrackAudioMaster::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackAudioMaster");
    return result;
}
