#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsBitfield.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
struct RsEnum;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsBitStack : public _Script_CoreUObject::Object {
    private: char pad_28[0x638]; public:
    static _Script_CoreUObject::Class* static_class();
    void* TopParmName();
    _Script_RsTechRT::RsBitfield Top();
    bool SetNamed(void*& setBits);
    bool SetInvalidNamed(void*& invalidBits);
    bool SetInvalidAtNamed(void* Name, void*& invalidBits);
    bool SetInvalidAt(void* Name, _Script_RsTechRT::RsBitfield& invalidBits);
    bool SetInvalid(_Script_RsTechRT::RsBitfield& invalidBits);
    bool SetAtNamed(void* Name, void*& setBits);
    bool SetAt(void* Name, _Script_RsTechRT::RsBitfield& setBits);
    bool Set(_Script_RsTechRT::RsBitfield& setBits);
    bool PushNamed(void* Name, void*& Set, void*& Clear, void*& Invalid, void*& ClearInvalid);
    bool Push(void* Name, _Script_RsTechRT::RsBitfield Set, _Script_RsTechRT::RsBitfield Clear, _Script_RsTechRT::RsBitfield Invalid, _Script_RsTechRT::RsBitfield ClearInvalid);
    bool Pop(void* bitParmName);
    _Script_RsTechRT::RsBitStack* MakeRsBitStack(_Script_RsTechRT::RsEnum* RsEnum);
    bool IsParmInStack(void* bitParmName);
    bool IsAnySet(_Script_RsTechRT::RsBitfield& Bitfield);
    bool IsAnyNamedSet(void*& Bits);
    void EmptyStack();
    void DumpBitStack(void*& ToString);
    bool ClearNamed(void*& clearBits);
    bool ClearInvalidNamed(void*& clearinvalidBits);
    bool ClearInvalidAtNamed(void* Name, void*& clearinvalidBits);
    bool ClearInvalidAt(void* Name, _Script_RsTechRT::RsBitfield& clearinvalidBits);
    bool ClearInvalid(_Script_RsTechRT::RsBitfield& clearinvalidBits);
    bool ClearAtNamed(void* Name, void*& clearBits);
    bool ClearAt(void* Name, _Script_RsTechRT::RsBitfield& clearBits);
    bool Clear(_Script_RsTechRT::RsBitfield& clearBits);
    bool AreAllSet(_Script_RsTechRT::RsBitfield& Bitfield);
    bool AreAllNamedSet(void*& Bits);
}; // Size: 0x660
#pragma pack(pop)
}
