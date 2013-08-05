#ifndef _ALTOVA_INCLUDED_CMSD_ALTOVA__ALTOVA_CWidthType3
#define _ALTOVA_INCLUDED_CMSD_ALTOVA__ALTOVA_CWidthType3



namespace CMSD
{

class CWidthType3 : public TypeBase
{
public:
	CMSD_EXPORT CWidthType3(MSXML2::IXMLDOMNodePtr const& init);
	CMSD_EXPORT CWidthType3(CWidthType3 const& init);
	void operator=(CWidthType3 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CWidthType3); }
	MemberElement<CschemaType, _altova_mi_altova_CWidthType3_altova_schema> schema;
	struct schema { typedef Iterator<CschemaType> iterator; };
};


}	// namespace CMSD

#endif // _ALTOVA_INCLUDED_CMSD_ALTOVA__ALTOVA_CWidthType3