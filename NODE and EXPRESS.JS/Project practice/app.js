require('dotenv').config();

const express = require('express');
const nodemailer = require('nodemailer');

const app = express();

app.use(express.static('./public'));

const transporter = nodemailer.createTransport({
    service: 'gmail',
    auth: {
        user:process.env.EMAIL_USER,
        pass:process.env.EMAIL_PASS
    }
});

app.post('/api/book', (req, res) => {

    const mailOptions = {
        from: process.env.EMAIL_USER,
        to: 'adpdbgang@gmail.com',
        subject: 'New Service Booking',
        text: 'Someone has requested a service'
    };

    transporter.sendMail(mailOptions, (error, info) => {

        if (error) {
            console.log(error);
            return res.send('Email failed');
        }

        console.log('Email sent!');
        res.send('Booking successful');
    });
});

app.listen(5000, () => {
    console.log('Server running on port 5000');
});