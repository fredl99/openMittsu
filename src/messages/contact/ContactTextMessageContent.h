#ifndef OPENMITTSU_MESSAGES_CONTACT_CONTACTTEXTMESSAGECONTENT_H_
#define OPENMITTSU_MESSAGES_CONTACT_CONTACTTEXTMESSAGECONTENT_H_

#include "messages/MessageContentFactory.h"
#include "messages/contact/ContactMessageContent.h"

#include <QString>

class ContactTextMessageContent : public ContactMessageContent {
public:
	ContactTextMessageContent(QString const& text);
	virtual ~ContactTextMessageContent();

	virtual ContactMessageContent* clone() const override;

	virtual QByteArray toPacketPayload() const override;

	virtual MessageContent* fromPacketPayload(FullMessageHeader const& messageHeader, QByteArray const& payload) const override;

	virtual QString const& getText() const;

	friend class TypedMessageContentFactory<ContactTextMessageContent>;
private:
	ContactTextMessageContent();

	QString const text;

	static bool registrationResult;
};

#endif // OPENMITTSU_MESSAGES_CONTACT_CONTACTTEXTMESSAGECONTENT_H_
