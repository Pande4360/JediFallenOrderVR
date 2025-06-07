#include "..\FUObjectArray.hpp"
#include "ST_SpeakerActorList.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
void* _Game_Narrative_Enums_ST_SpeakerActorList::ST_SpeakerActorList::get_SpeakerActors_8_31742D08433CFCBBBDEFD384C6736AF9() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::Actor*& _Game_Narrative_Enums_ST_SpeakerActorList::ST_SpeakerActorList::get_MostRecent_7_98526296456402CE5975EFA771393CA6() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Game_Narrative_Enums_ST_SpeakerActorList::ST_SpeakerActorList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Narrative/Enums/ST_SpeakerActorList.ST_SpeakerActorList");
    return result;
}
