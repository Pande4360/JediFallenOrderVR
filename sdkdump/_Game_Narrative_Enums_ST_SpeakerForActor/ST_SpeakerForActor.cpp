#include "..\FUObjectArray.hpp"
#include "ST_SpeakerForActor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
void* _Game_Narrative_Enums_ST_SpeakerForActor::ST_SpeakerForActor::get_SpeakerTag_2_8B8ABE0E414204DB3964FEB13E45C2D3() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::Actor*& _Game_Narrative_Enums_ST_SpeakerForActor::ST_SpeakerForActor::get_Actor_6_4436996B42BA8C3F9B1EE9A8C14F357C() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Game_Narrative_Enums_ST_SpeakerForActor::ST_SpeakerForActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Narrative/Enums/ST_SpeakerForActor.ST_SpeakerForActor");
    return result;
}
