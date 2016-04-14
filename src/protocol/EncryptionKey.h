#ifndef OPENMITTSU_PROTOCOL_ENCRYPTIONKEY_H_
#define OPENMITTSU_PROTOCOL_ENCRYPTIONKEY_H_

#include <cstdint>
#include <QtGlobal>
#include <QByteArray>

class EncryptionKey {
public:
	EncryptionKey();
	EncryptionKey(QByteArray const& encryptionKeyBytes);
	EncryptionKey(EncryptionKey const& other);
	virtual ~EncryptionKey();

	QByteArray const& getEncryptionKey() const;
	unsigned char const* getEncryptionKeyAsCharPtr() const;

	static int getSizeOfEncryptionKeyInBytes();

	bool operator ==(EncryptionKey const& other) const;
private:
	QByteArray const encryptionKey;

	static QByteArray generateRandomEncryptionKey();
};

#endif // OPENMITTSU_PROTOCOL_ENCRYPTIONKEY_H_

