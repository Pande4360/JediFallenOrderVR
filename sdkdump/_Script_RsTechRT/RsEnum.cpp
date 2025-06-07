#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsBitfield.hpp"
#include "RsEnum.hpp"
_Script_CoreUObject::Class* _Script_RsTechRT::RsEnum::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsEnum");
    return result;
}
_Script_RsTechRT::RsEnum* _Script_RsTechRT::RsEnum::MakeRsEnum(void* enumParmName) {
    return;
}
bool _Script_RsTechRT::RsEnum::MakeBitfield(_Script_RsTechRT::RsBitfield& Bitfield, void*& namedBits) {
    return;
}
void _Script_RsTechRT::RsEnum::DumpEnum(void*& ToString) {
    return;
}
void _Script_RsTechRT::RsEnum::DumpBitfield(void*& ToString, _Script_RsTechRT::RsBitfield& Bitfield) {
    return;
}
